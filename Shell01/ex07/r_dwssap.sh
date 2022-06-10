#!/bin/sh


export FT_LINE1=1
export FT_LINE2=5



cat /etc/passwd | cut -d: -f1 | grep -v '#' | sed -n 'p;n' | rev | sort -r | head -$FT_LINE2 | tail +$FT_LINE1 | tr '\n' ',' | sed 's/,/, /g' | sed 's/. $/./' | cat -e
