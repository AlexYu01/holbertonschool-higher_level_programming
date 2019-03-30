#!/usr/bin/python3
"""
    Module that performs MySQL query through MySQLdb module.
"""
import MySQLdb
import sys


if __name__ == "__main__":
    conn = MySQLdb.connect(host="localhost", port=3306, user=sys.argv[1],
                           passwd=sys.argv[2], db=sys.argv[3])

    cur = conn.cursor()
    stmt = "SELECT * FROM states WHERE states.name LIKE 'N%' ORDER BY \
    states.id"
    cur.execute(stmt)
    query_rows = cur.fetchall()

    for row in query_rows:
        print(row)

    cur.close()
    conn.close()
