<<<<<<< HEAD
# Copyright (c) 2023-present The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

add_library(bitcoin_ipc STATIC EXCLUDE_FROM_ALL
=======
# Copyright (c) 2023-present The BitNova Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

add_library(bitnova_ipc STATIC EXCLUDE_FROM_ALL
>>>>>>> 5360f2baff (Initialized BitNova project)
  capnp/mining.cpp
  capnp/protocol.cpp
  interfaces.cpp
  process.cpp
)

<<<<<<< HEAD
target_capnp_sources(bitcoin_ipc ${PROJECT_SOURCE_DIR}
=======
target_capnp_sources(bitnova_ipc ${PROJECT_SOURCE_DIR}
>>>>>>> 5360f2baff (Initialized BitNova project)
  capnp/common.capnp
  capnp/echo.capnp
  capnp/init.capnp
  capnp/mining.capnp
)

<<<<<<< HEAD
target_link_libraries(bitcoin_ipc
=======
target_link_libraries(bitnova_ipc
>>>>>>> 5360f2baff (Initialized BitNova project)
  PRIVATE
    core_interface
    univalue
)
