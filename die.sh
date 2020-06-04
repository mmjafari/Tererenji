#!/bin/bash
for i in $(seq 1 $2); do
echo $(($(date +"%s%N") % $1 + 1))
done