<<<<<<< HEAD
# Copyright (c) 2023-present The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

add_library(bitcoin_zmq STATIC EXCLUDE_FROM_ALL
=======
# Copyright (c) 2023-present The BitNova Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

add_library(bitnova_zmq STATIC EXCLUDE_FROM_ALL
>>>>>>> 5360f2baff (Initialized BitNova project)
  zmqabstractnotifier.cpp
  zmqnotificationinterface.cpp
  zmqpublishnotifier.cpp
  zmqrpc.cpp
  zmqutil.cpp
)
<<<<<<< HEAD
target_compile_definitions(bitcoin_zmq
  INTERFACE
    ENABLE_ZMQ=1
)
target_link_libraries(bitcoin_zmq
=======
target_compile_definitions(bitnova_zmq
  INTERFACE
    ENABLE_ZMQ=1
)
target_link_libraries(bitnova_zmq
>>>>>>> 5360f2baff (Initialized BitNova project)
  PRIVATE
    core_interface
    univalue
    zeromq
)
