<<<<<<< HEAD
# Copyright (c) 2024-present The Bitcoin Core developers
=======
# Copyright (c) 2024-present The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

include(GNUInstallDirs)

<<<<<<< HEAD
# TODO: libbitcoinkernel is a work in progress consensus engine
#       library, as more and more modules are decoupled from the
#       consensus engine, this list will shrink to only those
#       which are absolutely necessary.
add_library(bitcoinkernel
  bitcoinkernel.cpp
=======
# TODO: libbitnovakernel is a work in progress consensus engine
#       library, as more and more modules are decoupled from the
#       consensus engine, this list will shrink to only those
#       which are absolutely necessary.
add_library(bitnovakernel
  bitnovakernel.cpp
>>>>>>> 5360f2baff (Initialized BitNova project)
  chain.cpp
  checks.cpp
  chainparams.cpp
  coinstats.cpp
  context.cpp
  cs_main.cpp
  disconnected_transactions.cpp
  mempool_removal_reason.cpp
  ../arith_uint256.cpp
  ../chain.cpp
  ../coins.cpp
  ../compressor.cpp
  ../consensus/merkle.cpp
  ../consensus/tx_check.cpp
  ../consensus/tx_verify.cpp
  ../core_read.cpp
  ../dbwrapper.cpp
  ../deploymentinfo.cpp
  ../deploymentstatus.cpp
  ../flatfile.cpp
  ../hash.cpp
  ../logging.cpp
  ../node/blockstorage.cpp
  ../node/chainstate.cpp
  ../node/utxo_snapshot.cpp
  ../policy/ephemeral_policy.cpp
  ../policy/feerate.cpp
  ../policy/packages.cpp
  ../policy/policy.cpp
  ../policy/rbf.cpp
  ../policy/settings.cpp
  ../policy/truc_policy.cpp
  ../pow.cpp
  ../primitives/block.cpp
  ../primitives/transaction.cpp
  ../pubkey.cpp
  ../random.cpp
  ../randomenv.cpp
  ../script/interpreter.cpp
  ../script/script.cpp
  ../script/script_error.cpp
  ../script/sigcache.cpp
  ../script/solver.cpp
  ../signet.cpp
  ../streams.cpp
  ../support/lockedpool.cpp
  ../sync.cpp
  ../txdb.cpp
  ../txmempool.cpp
  ../uint256.cpp
  ../util/chaintype.cpp
  ../util/check.cpp
  ../util/feefrac.cpp
  ../util/fs.cpp
  ../util/fs_helpers.cpp
  ../util/hasher.cpp
  ../util/moneystr.cpp
  ../util/rbf.cpp
  ../util/serfloat.cpp
  ../util/signalinterrupt.cpp
  ../util/strencodings.cpp
  ../util/string.cpp
  ../util/syserror.cpp
  ../util/threadnames.cpp
  ../util/time.cpp
  ../util/tokenpipe.cpp
  ../validation.cpp
  ../validationinterface.cpp
  ../versionbits.cpp
)
<<<<<<< HEAD
target_link_libraries(bitcoinkernel
  PRIVATE
    core_interface
    bitcoin_clientversion
    bitcoin_crypto
=======
target_link_libraries(bitnovakernel
  PRIVATE
    core_interface
    bitnova_clientversion
    bitnova_crypto
>>>>>>> 5360f2baff (Initialized BitNova project)
    leveldb
    secp256k1
    $<TARGET_NAME_IF_EXISTS:USDT::headers>
  PUBLIC
    Boost::headers
)

<<<<<<< HEAD
# libbitcoinkernel requires default symbol visibility, explicitly
=======
# libbitnovakernel requires default symbol visibility, explicitly
>>>>>>> 5360f2baff (Initialized BitNova project)
# specify that here so that things still work even when user
# configures with -DREDUCE_EXPORTS=ON
#
# Note this is a quick hack that will be removed as we
# incrementally define what to export from the library.
<<<<<<< HEAD
set_target_properties(bitcoinkernel PROPERTIES
  CXX_VISIBILITY_PRESET default
)

# Add a convenience libbitcoinkernel target as a synonym for bitcoinkernel.
add_custom_target(libbitcoinkernel)
add_dependencies(libbitcoinkernel bitcoinkernel)

# When building the static library, install all static libraries the
# bitcoinkernel depends on.
=======
set_target_properties(bitnovakernel PROPERTIES
  CXX_VISIBILITY_PRESET default
)

# Add a convenience libbitnovakernel target as a synonym for bitnovakernel.
add_custom_target(libbitnovakernel)
add_dependencies(libbitnovakernel bitnovakernel)

# When building the static library, install all static libraries the
# bitnovakernel depends on.
>>>>>>> 5360f2baff (Initialized BitNova project)
if(NOT BUILD_SHARED_LIBS)
  # Recursively get all the static libraries a target depends on and put them in libs_out
  function(get_target_static_link_libs target libs_out)
    get_target_property(linked_libraries ${target} LINK_LIBRARIES)
    foreach(dep ${linked_libraries})
      if(TARGET ${dep})
<<<<<<< HEAD
        add_dependencies(libbitcoinkernel ${dep})
=======
        add_dependencies(libbitnovakernel ${dep})
>>>>>>> 5360f2baff (Initialized BitNova project)
        get_target_property(dep_type ${dep} TYPE)
        if(dep_type STREQUAL "STATIC_LIBRARY")
          list(APPEND ${libs_out} ${dep})
          get_target_static_link_libs(${dep} ${libs_out})
        endif()
      endif()
    endforeach()
    set(${libs_out} ${${libs_out}} PARENT_SCOPE)
  endfunction()

  set(all_kernel_static_link_libs "")
<<<<<<< HEAD
  get_target_static_link_libs(bitcoinkernel all_kernel_static_link_libs)

  install(TARGETS ${all_kernel_static_link_libs} ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT libbitcoinkernel)
=======
  get_target_static_link_libs(bitnovakernel all_kernel_static_link_libs)

  install(TARGETS ${all_kernel_static_link_libs} ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT libbitnovakernel)
>>>>>>> 5360f2baff (Initialized BitNova project)
  list(TRANSFORM all_kernel_static_link_libs PREPEND "-l")
  # LIBS_PRIVATE is substituted in the pkg-config file.
  list(JOIN all_kernel_static_link_libs " " LIBS_PRIVATE)
endif()

<<<<<<< HEAD
configure_file(${PROJECT_SOURCE_DIR}/libbitcoinkernel.pc.in ${PROJECT_BINARY_DIR}/libbitcoinkernel.pc @ONLY)
install(FILES ${PROJECT_BINARY_DIR}/libbitcoinkernel.pc DESTINATION "${CMAKE_INSTALL_LIBDIR}/pkgconfig" COMPONENT libbitcoinkernel)

install(TARGETS bitcoinkernel
  RUNTIME
    DESTINATION ${CMAKE_INSTALL_BINDIR}
    COMPONENT libbitcoinkernel
  LIBRARY
    DESTINATION ${CMAKE_INSTALL_LIBDIR}
    COMPONENT libbitcoinkernel
  ARCHIVE
    DESTINATION ${CMAKE_INSTALL_LIBDIR}
    COMPONENT libbitcoinkernel
=======
configure_file(${PROJECT_SOURCE_DIR}/libbitnovakernel.pc.in ${PROJECT_BINARY_DIR}/libbitnovakernel.pc @ONLY)
install(FILES ${PROJECT_BINARY_DIR}/libbitnovakernel.pc DESTINATION "${CMAKE_INSTALL_LIBDIR}/pkgconfig" COMPONENT libbitnovakernel)

install(TARGETS bitnovakernel
  RUNTIME
    DESTINATION ${CMAKE_INSTALL_BINDIR}
    COMPONENT libbitnovakernel
  LIBRARY
    DESTINATION ${CMAKE_INSTALL_LIBDIR}
    COMPONENT libbitnovakernel
  ARCHIVE
    DESTINATION ${CMAKE_INSTALL_LIBDIR}
    COMPONENT libbitnovakernel
>>>>>>> 5360f2baff (Initialized BitNova project)
)
