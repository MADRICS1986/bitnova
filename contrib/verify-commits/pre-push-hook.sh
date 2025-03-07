#!/usr/bin/env bash
<<<<<<< HEAD
# Copyright (c) 2014-2021 The Bitcoin Core developers
=======
# Copyright (c) 2014-2021 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

export LC_ALL=C
<<<<<<< HEAD
if ! [[ "$2" =~ ^(git@)?(www.)?github.com(:|/)bitcoin/bitcoin(.git)?$ ]]; then
=======
if ! [[ "$2" =~ ^(git@)?(www.)?github.com(:|/)bitnova/bitnova(.git)?$ ]]; then
>>>>>>> 5360f2baff (Initialized BitNova project)
    exit 0
fi

while read LINE; do
    set -- A "$LINE"
    if [ "$4" != "refs/heads/master" ]; then
        continue
    fi
    if ! ./contrib/verify-commits/verify-commits.py "$3" > /dev/null 2>&1; then
        echo "ERROR: A commit is not signed, can't push"
        ./contrib/verify-commits/verify-commits.py
        exit 1
    fi
done < /dev/stdin
