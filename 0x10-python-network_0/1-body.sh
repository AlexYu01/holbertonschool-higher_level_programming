#!/bin/bash
# Curl a URL and display body if the status is 200
RESP=$(curl -sLI "$1" -X GET)
STATUS=$(echo "$RESP" | grep "200 OK" | cut -d' '  -f2)
if [ "$STATUS" = '200' ];
then
    curl -sL "$1"
fi
