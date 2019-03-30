#!/usr/bin/python3
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy import Column, Integer, String, text, ForeignKey
from sqlalchemy.orm import relationship
from model_state import Base, State
"""
    Module that performs creates a States class based off of Base.
"""


class City(Base):
    """
        The ``City`` class which inherits from ``Base`` class.
    """
    __tablename__ = 'cities'
    id = Column(Integer, primary_key=True)
    name = Column(String(128), nullable=False)
    state_id = Column(Integer, ForeignKey('states.id'), nullable=False)

    state = relationship("State", back_populates="cities")

State.cities = relationship("City", order_by=City.id, back_populates="state")
