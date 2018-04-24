#!/bin/sh
cat $1 | grep -i "nicolas\t" | grep -i "bomber\t" | grep -i "-" | tr "\t" " " | cut -d " " -f  3
