#!/usr/bin/python3
"""
    Module for `LockedClass`
"""


class LockedClass:
    """
        LockedClass that wont allow any instance attributes to be added except
        for `first_name`.
    """

    def __setattr__(self, name, value):
        """
            Override the reserved method `setattr` to prevent instance
            attributes besides `first_name` to be add to the instance's dict.

            Args:
                name (:obj:`str`): The name of the proposed attribute.
                value (any): value to assign to proposed attribute.
        """
        if name != "first_name":
            raise AttributeError("'" + self.__class__.__name__ +
                                 "' object has no attribute '" +
                                 name + "'")
        self.__dict__[name] = value

    def __getattr__(self, name):
        """
            Override the reserved method `getattr` to preven retrieval of any
            attributes, including instance's dict.

            Args:
                name (:obj:`str`): A string.
        """
        raise AttributeError("'" + self.__class__.__name__ +
                             "' object has no attribute '" +
                             name + "'")
