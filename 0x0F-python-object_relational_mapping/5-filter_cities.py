#!/usr/bin/python3
import MySQLdb
import sys
"""
    Module that performs MySQL query through MySQLdb module.
"""


if __name__ == "__main__":
    for c in sys.argv[4]:
        if c == ';':
            exit()

    conn = MySQLdb.connect(host="localhost", port=3306, user=sys.argv[1],
                           passwd=sys.argv[2], db=sys.argv[3], charset="utf8")

    cur = conn.cursor()

    stmt = "SELECT c.name FROM cities c LEFT JOIN states s ON \
            c.state_id = s.id WHERE BINARY s.name = '{}'".format(sys.argv[4])
    cur.execute(stmt)
    query_rows = cur.fetchall()

    i = 0
    f = ''
    for row in query_rows:
        if i != 0:
            print(', ', end='')
        print(row[0], end='')
        i += 1
        f = '\n'
    print(end=f)

    cur.close()
    conn.close()
