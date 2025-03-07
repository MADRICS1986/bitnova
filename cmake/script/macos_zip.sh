#!/bin/sh
<<<<<<< HEAD
# Copyright (c) 2024-present The Bitcoin Core developers
=======
# Copyright (c) 2024-present The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

export LC_ALL=C

if [ -n "$SOURCE_DATE_EPOCH" ]; then
  find . -exec touch -d "@$SOURCE_DATE_EPOCH" {} +
fi

find . | sort | "$1" -X@ "$2"
