<<<<<<< HEAD
# Copyright (c) 2023-present The Bitcoin Core developers
=======
# Copyright (c) 2023-present The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

target_sources(fuzz
  PRIVATE
    coincontrol.cpp
    coinselection.cpp
    crypter.cpp
    fees.cpp
    $<$<BOOL:${USE_SQLITE}>:${CMAKE_CURRENT_LIST_DIR}/notifications.cpp>
    $<$<BOOL:${USE_SQLITE}>:${CMAKE_CURRENT_LIST_DIR}/scriptpubkeyman.cpp>
    spend.cpp
    wallet_bdb_parser.cpp
)
<<<<<<< HEAD
target_link_libraries(fuzz bitcoin_wallet)
=======
target_link_libraries(fuzz bitnova_wallet)
>>>>>>> 5360f2baff (Initialized BitNova project)
