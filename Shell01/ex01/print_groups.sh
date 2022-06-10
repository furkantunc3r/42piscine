#!/bin/sh

FT_USER=ftuncer
export FT_USER

id -Gn  $FT_USER | cat -e | tr -s ' ' ','
