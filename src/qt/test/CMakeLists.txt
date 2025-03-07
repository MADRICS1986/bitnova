<<<<<<< HEAD
# Copyright (c) 2024-present The Bitcoin Core developers
=======
# Copyright (c) 2024-present The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

set(CMAKE_AUTOMOC_MOC_OPTIONS "-p${CMAKE_CURRENT_SOURCE_DIR}")

<<<<<<< HEAD
add_executable(test_bitcoin-qt
=======
add_executable(test_bitnova-qt
>>>>>>> 5360f2baff (Initialized BitNova project)
  apptests.cpp
  optiontests.cpp
  rpcnestedtests.cpp
  test_main.cpp
  uritests.cpp
  util.cpp
<<<<<<< HEAD
  ../../init/bitcoin-qt.cpp
)

target_link_libraries(test_bitcoin-qt
  core_interface
  bitcoinqt
  test_util
  bitcoin_node
=======
  ../../init/bitnova-qt.cpp
)

target_link_libraries(test_bitnova-qt
  core_interface
  bitnovaqt
  test_util
  bitnova_node
>>>>>>> 5360f2baff (Initialized BitNova project)
  Boost::headers
  Qt5::Test
)

<<<<<<< HEAD
import_plugins(test_bitcoin-qt)

if(ENABLE_WALLET)
  target_sources(test_bitcoin-qt
=======
import_plugins(test_bitnova-qt)

if(ENABLE_WALLET)
  target_sources(test_bitnova-qt
>>>>>>> 5360f2baff (Initialized BitNova project)
    PRIVATE
      addressbooktests.cpp
      wallettests.cpp
      ../../wallet/test/wallet_test_fixture.cpp
  )
endif()

<<<<<<< HEAD
add_test(NAME test_bitcoin-qt
  COMMAND test_bitcoin-qt
=======
add_test(NAME test_bitnova-qt
  COMMAND test_bitnova-qt
>>>>>>> 5360f2baff (Initialized BitNova project)
)
if(WIN32 AND VCPKG_TARGET_TRIPLET)
  # On Windows, vcpkg configures Qt with `-opengl dynamic`, which makes
  # the "minimal" platform plugin unusable due to internal Qt bugs.
<<<<<<< HEAD
  set_tests_properties(test_bitcoin-qt PROPERTIES
=======
  set_tests_properties(test_bitnova-qt PROPERTIES
>>>>>>> 5360f2baff (Initialized BitNova project)
    ENVIRONMENT "QT_QPA_PLATFORM=windows"
  )
endif()

<<<<<<< HEAD
install_binary_component(test_bitcoin-qt)
=======
install_binary_component(test_bitnova-qt)
>>>>>>> 5360f2baff (Initialized BitNova project)
