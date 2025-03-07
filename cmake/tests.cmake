<<<<<<< HEAD
# Copyright (c) 2023-present The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

if(TARGET bitcoin-util AND TARGET bitcoin-tx AND PYTHON_COMMAND)
  add_test(NAME util_test_runner
    COMMAND ${CMAKE_COMMAND} -E env BITCOINUTIL=$<TARGET_FILE:bitcoin-util> BITCOINTX=$<TARGET_FILE:bitcoin-tx> ${PYTHON_COMMAND} ${PROJECT_BINARY_DIR}/test/util/test_runner.py
=======
# Copyright (c) 2023-present The BitNova Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

if(TARGET bitnova-util AND TARGET bitnova-tx AND PYTHON_COMMAND)
  add_test(NAME util_test_runner
    COMMAND ${CMAKE_COMMAND} -E env BITCOINUTIL=$<TARGET_FILE:bitnova-util> BITCOINTX=$<TARGET_FILE:bitnova-tx> ${PYTHON_COMMAND} ${PROJECT_BINARY_DIR}/test/util/test_runner.py
>>>>>>> 5360f2baff (Initialized BitNova project)
  )
endif()

if(PYTHON_COMMAND)
  add_test(NAME util_rpcauth_test
    COMMAND ${PYTHON_COMMAND} ${PROJECT_BINARY_DIR}/test/util/rpcauth-test.py
  )
endif()
