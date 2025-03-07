<<<<<<< HEAD
# Copyright (c) 2023-present The Bitcoin Core developers
=======
# Copyright (c) 2023-present The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

include_guard(GLOBAL)

function(setup_split_debug_script)
  if(CMAKE_HOST_SYSTEM_NAME STREQUAL "Linux")
    set(OBJCOPY ${CMAKE_OBJCOPY})
    set(STRIP ${CMAKE_STRIP})
    configure_file(
      contrib/devtools/split-debug.sh.in split-debug.sh
      FILE_PERMISSIONS OWNER_READ OWNER_EXECUTE
                       GROUP_READ GROUP_EXECUTE
                       WORLD_READ
      @ONLY
    )
  endif()
endfunction()

function(add_maintenance_targets)
  if(NOT PYTHON_COMMAND)
    return()
  endif()

<<<<<<< HEAD
  foreach(target IN ITEMS bitcoind bitcoin-qt bitcoin-cli bitcoin-tx bitcoin-util bitcoin-wallet test_bitcoin bench_bitcoin)
=======
  foreach(target IN ITEMS bitnovad bitnova-qt bitnova-cli bitnova-tx bitnova-util bitnova-wallet test_bitnova bench_bitnova)
>>>>>>> 5360f2baff (Initialized BitNova project)
    if(TARGET ${target})
      list(APPEND executables $<TARGET_FILE:${target}>)
    endif()
  endforeach()

  add_custom_target(check-symbols
    COMMAND ${CMAKE_COMMAND} -E echo "Running symbol and dynamic library checks..."
    COMMAND ${PYTHON_COMMAND} ${PROJECT_SOURCE_DIR}/contrib/devtools/symbol-check.py ${executables}
    VERBATIM
  )

  add_custom_target(check-security
    COMMAND ${CMAKE_COMMAND} -E echo "Checking binary security..."
    COMMAND ${PYTHON_COMMAND} ${PROJECT_SOURCE_DIR}/contrib/devtools/security-check.py ${executables}
    VERBATIM
  )
endfunction()

function(add_windows_deploy_target)
<<<<<<< HEAD
  if(MINGW AND TARGET bitcoin-qt AND TARGET bitcoind AND TARGET bitcoin-cli AND TARGET bitcoin-tx AND TARGET bitcoin-wallet AND TARGET bitcoin-util AND TARGET test_bitcoin)
=======
  if(MINGW AND TARGET bitnova-qt AND TARGET bitnovad AND TARGET bitnova-cli AND TARGET bitnova-tx AND TARGET bitnova-wallet AND TARGET bitnova-util AND TARGET test_bitnova)
>>>>>>> 5360f2baff (Initialized BitNova project)
    # TODO: Consider replacing this code with the CPack NSIS Generator.
    #       See https://cmake.org/cmake/help/latest/cpack_gen/nsis.html
    include(GenerateSetupNsi)
    generate_setup_nsi()
    add_custom_command(
<<<<<<< HEAD
      OUTPUT ${PROJECT_BINARY_DIR}/bitcoin-win64-setup.exe
      COMMAND ${CMAKE_COMMAND} -E make_directory ${PROJECT_BINARY_DIR}/release
      COMMAND ${CMAKE_STRIP} $<TARGET_FILE:bitcoin-qt> -o ${PROJECT_BINARY_DIR}/release/$<TARGET_FILE_NAME:bitcoin-qt>
      COMMAND ${CMAKE_STRIP} $<TARGET_FILE:bitcoind> -o ${PROJECT_BINARY_DIR}/release/$<TARGET_FILE_NAME:bitcoind>
      COMMAND ${CMAKE_STRIP} $<TARGET_FILE:bitcoin-cli> -o ${PROJECT_BINARY_DIR}/release/$<TARGET_FILE_NAME:bitcoin-cli>
      COMMAND ${CMAKE_STRIP} $<TARGET_FILE:bitcoin-tx> -o ${PROJECT_BINARY_DIR}/release/$<TARGET_FILE_NAME:bitcoin-tx>
      COMMAND ${CMAKE_STRIP} $<TARGET_FILE:bitcoin-wallet> -o ${PROJECT_BINARY_DIR}/release/$<TARGET_FILE_NAME:bitcoin-wallet>
      COMMAND ${CMAKE_STRIP} $<TARGET_FILE:bitcoin-util> -o ${PROJECT_BINARY_DIR}/release/$<TARGET_FILE_NAME:bitcoin-util>
      COMMAND ${CMAKE_STRIP} $<TARGET_FILE:test_bitcoin> -o ${PROJECT_BINARY_DIR}/release/$<TARGET_FILE_NAME:test_bitcoin>
      COMMAND makensis -V2 ${PROJECT_BINARY_DIR}/bitcoin-win64-setup.nsi
      VERBATIM
    )
    add_custom_target(deploy DEPENDS ${PROJECT_BINARY_DIR}/bitcoin-win64-setup.exe)
=======
      OUTPUT ${PROJECT_BINARY_DIR}/bitnova-win64-setup.exe
      COMMAND ${CMAKE_COMMAND} -E make_directory ${PROJECT_BINARY_DIR}/release
      COMMAND ${CMAKE_STRIP} $<TARGET_FILE:bitnova-qt> -o ${PROJECT_BINARY_DIR}/release/$<TARGET_FILE_NAME:bitnova-qt>
      COMMAND ${CMAKE_STRIP} $<TARGET_FILE:bitnovad> -o ${PROJECT_BINARY_DIR}/release/$<TARGET_FILE_NAME:bitnovad>
      COMMAND ${CMAKE_STRIP} $<TARGET_FILE:bitnova-cli> -o ${PROJECT_BINARY_DIR}/release/$<TARGET_FILE_NAME:bitnova-cli>
      COMMAND ${CMAKE_STRIP} $<TARGET_FILE:bitnova-tx> -o ${PROJECT_BINARY_DIR}/release/$<TARGET_FILE_NAME:bitnova-tx>
      COMMAND ${CMAKE_STRIP} $<TARGET_FILE:bitnova-wallet> -o ${PROJECT_BINARY_DIR}/release/$<TARGET_FILE_NAME:bitnova-wallet>
      COMMAND ${CMAKE_STRIP} $<TARGET_FILE:bitnova-util> -o ${PROJECT_BINARY_DIR}/release/$<TARGET_FILE_NAME:bitnova-util>
      COMMAND ${CMAKE_STRIP} $<TARGET_FILE:test_bitnova> -o ${PROJECT_BINARY_DIR}/release/$<TARGET_FILE_NAME:test_bitnova>
      COMMAND makensis -V2 ${PROJECT_BINARY_DIR}/bitnova-win64-setup.nsi
      VERBATIM
    )
    add_custom_target(deploy DEPENDS ${PROJECT_BINARY_DIR}/bitnova-win64-setup.exe)
>>>>>>> 5360f2baff (Initialized BitNova project)
  endif()
endfunction()

function(add_macos_deploy_target)
<<<<<<< HEAD
  if(CMAKE_SYSTEM_NAME STREQUAL "Darwin" AND TARGET bitcoin-qt)
    set(macos_app "Bitcoin-Qt.app")
=======
  if(CMAKE_SYSTEM_NAME STREQUAL "Darwin" AND TARGET bitnova-qt)
    set(macos_app "BitNova-Qt.app")
>>>>>>> 5360f2baff (Initialized BitNova project)
    # Populate Contents subdirectory.
    configure_file(${PROJECT_SOURCE_DIR}/share/qt/Info.plist.in ${macos_app}/Contents/Info.plist NO_SOURCE_PERMISSIONS)
    file(CONFIGURE OUTPUT ${macos_app}/Contents/PkgInfo CONTENT "APPL????")
    # Populate Contents/Resources subdirectory.
    file(CONFIGURE OUTPUT ${macos_app}/Contents/Resources/empty.lproj CONTENT "")
<<<<<<< HEAD
    configure_file(${PROJECT_SOURCE_DIR}/src/qt/res/icons/bitcoin.icns ${macos_app}/Contents/Resources/bitcoin.icns NO_SOURCE_PERMISSIONS COPYONLY)
=======
    configure_file(${PROJECT_SOURCE_DIR}/src/qt/res/icons/bitnova.icns ${macos_app}/Contents/Resources/bitnova.icns NO_SOURCE_PERMISSIONS COPYONLY)
>>>>>>> 5360f2baff (Initialized BitNova project)
    file(CONFIGURE OUTPUT ${macos_app}/Contents/Resources/Base.lproj/InfoPlist.strings
      CONTENT "{ CFBundleDisplayName = \"@CLIENT_NAME@\"; CFBundleName = \"@CLIENT_NAME@\"; }"
    )

    add_custom_command(
<<<<<<< HEAD
      OUTPUT ${PROJECT_BINARY_DIR}/${macos_app}/Contents/MacOS/Bitcoin-Qt
      COMMAND ${CMAKE_COMMAND} --install ${PROJECT_BINARY_DIR} --config $<CONFIG> --component bitcoin-qt --prefix ${macos_app}/Contents/MacOS --strip
      COMMAND ${CMAKE_COMMAND} -E rename ${macos_app}/Contents/MacOS/bin/$<TARGET_FILE_NAME:bitcoin-qt> ${macos_app}/Contents/MacOS/Bitcoin-Qt
=======
      OUTPUT ${PROJECT_BINARY_DIR}/${macos_app}/Contents/MacOS/BitNova-Qt
      COMMAND ${CMAKE_COMMAND} --install ${PROJECT_BINARY_DIR} --config $<CONFIG> --component bitnova-qt --prefix ${macos_app}/Contents/MacOS --strip
      COMMAND ${CMAKE_COMMAND} -E rename ${macos_app}/Contents/MacOS/bin/$<TARGET_FILE_NAME:bitnova-qt> ${macos_app}/Contents/MacOS/BitNova-Qt
>>>>>>> 5360f2baff (Initialized BitNova project)
      COMMAND ${CMAKE_COMMAND} -E rm -rf ${macos_app}/Contents/MacOS/bin
      VERBATIM
    )

    string(REPLACE " " "-" osx_volname ${CLIENT_NAME})
    if(CMAKE_HOST_APPLE)
      add_custom_command(
        OUTPUT ${PROJECT_BINARY_DIR}/${osx_volname}.zip
        COMMAND ${PYTHON_COMMAND} ${PROJECT_SOURCE_DIR}/contrib/macdeploy/macdeployqtplus ${macos_app} ${osx_volname} -translations-dir=${QT_TRANSLATIONS_DIR} -zip
<<<<<<< HEAD
        DEPENDS ${PROJECT_BINARY_DIR}/${macos_app}/Contents/MacOS/Bitcoin-Qt
=======
        DEPENDS ${PROJECT_BINARY_DIR}/${macos_app}/Contents/MacOS/BitNova-Qt
>>>>>>> 5360f2baff (Initialized BitNova project)
        VERBATIM
      )
      add_custom_target(deploydir
        DEPENDS ${PROJECT_BINARY_DIR}/${osx_volname}.zip
      )
      add_custom_target(deploy
        DEPENDS ${PROJECT_BINARY_DIR}/${osx_volname}.zip
      )
    else()
      add_custom_command(
<<<<<<< HEAD
        OUTPUT ${PROJECT_BINARY_DIR}/dist/${macos_app}/Contents/MacOS/Bitcoin-Qt
        COMMAND OBJDUMP=${CMAKE_OBJDUMP} ${PYTHON_COMMAND} ${PROJECT_SOURCE_DIR}/contrib/macdeploy/macdeployqtplus ${macos_app} ${osx_volname} -translations-dir=${QT_TRANSLATIONS_DIR}
        DEPENDS ${PROJECT_BINARY_DIR}/${macos_app}/Contents/MacOS/Bitcoin-Qt
        VERBATIM
      )
      add_custom_target(deploydir
        DEPENDS ${PROJECT_BINARY_DIR}/dist/${macos_app}/Contents/MacOS/Bitcoin-Qt
=======
        OUTPUT ${PROJECT_BINARY_DIR}/dist/${macos_app}/Contents/MacOS/BitNova-Qt
        COMMAND OBJDUMP=${CMAKE_OBJDUMP} ${PYTHON_COMMAND} ${PROJECT_SOURCE_DIR}/contrib/macdeploy/macdeployqtplus ${macos_app} ${osx_volname} -translations-dir=${QT_TRANSLATIONS_DIR}
        DEPENDS ${PROJECT_BINARY_DIR}/${macos_app}/Contents/MacOS/BitNova-Qt
        VERBATIM
      )
      add_custom_target(deploydir
        DEPENDS ${PROJECT_BINARY_DIR}/dist/${macos_app}/Contents/MacOS/BitNova-Qt
>>>>>>> 5360f2baff (Initialized BitNova project)
      )

      find_program(ZIP_COMMAND zip REQUIRED)
      add_custom_command(
        OUTPUT ${PROJECT_BINARY_DIR}/dist/${osx_volname}.zip
        WORKING_DIRECTORY dist
        COMMAND ${PROJECT_SOURCE_DIR}/cmake/script/macos_zip.sh ${ZIP_COMMAND} ${osx_volname}.zip
        VERBATIM
      )
      add_custom_target(deploy
        DEPENDS ${PROJECT_BINARY_DIR}/dist/${osx_volname}.zip
      )
    endif()
<<<<<<< HEAD
    add_dependencies(deploydir bitcoin-qt)
=======
    add_dependencies(deploydir bitnova-qt)
>>>>>>> 5360f2baff (Initialized BitNova project)
    add_dependencies(deploy deploydir)
  endif()
endfunction()
