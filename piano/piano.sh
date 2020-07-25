#!/bin/bash
while [ "$UPK" != "/" ]; do
    read -rsn1 UPK
    mpv piano-refined/$UPK.mp3 --quiet &> /dev/null &
done
