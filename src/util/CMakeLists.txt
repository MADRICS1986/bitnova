<<<<<<< HEAD
# Copyright (c) 2023-present The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

add_library(bitcoin_util STATIC EXCLUDE_FROM_ALL
=======
# Copyright (c) 2023-present The BitNova Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

add_library(bitnova_util STATIC EXCLUDE_FROM_ALL
>>>>>>> 5360f2baff (Initialized BitNova project)
  asmap.cpp
  batchpriority.cpp
  bip32.cpp
  bytevectorhash.cpp
  chaintype.cpp
  check.cpp
  exception.cpp
  feefrac.cpp
  fs.cpp
  fs_helpers.cpp
  hasher.cpp
  moneystr.cpp
  rbf.cpp
  readwritefile.cpp
  serfloat.cpp
  signalinterrupt.cpp
  sock.cpp
  strencodings.cpp
  string.cpp
  syserror.cpp
  thread.cpp
  threadinterrupt.cpp
  threadnames.cpp
  time.cpp
  tokenpipe.cpp
  ../logging.cpp
  ../random.cpp
  ../randomenv.cpp
  ../streams.cpp
  ../support/lockedpool.cpp
  ../sync.cpp
)

<<<<<<< HEAD
target_link_libraries(bitcoin_util
  PRIVATE
    core_interface
    bitcoin_clientversion
    bitcoin_crypto
=======
target_link_libraries(bitnova_util
  PRIVATE
    core_interface
    bitnova_clientversion
    bitnova_crypto
>>>>>>> 5360f2baff (Initialized BitNova project)
    $<$<PLATFORM_ID:Windows>:ws2_32>
    $<$<PLATFORM_ID:Windows>:iphlpapi>
)
