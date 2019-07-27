#!/bin/bash

last_modified=`stat -s bomb.txt | cut -d' ' -f10 | sed 's/st_mtime=//'`
echo "$last_modified - 1" | bc
