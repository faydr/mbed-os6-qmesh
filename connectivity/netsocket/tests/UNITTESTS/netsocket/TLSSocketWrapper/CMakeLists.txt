# Copyright (c) 2021 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

include(GoogleTest)

set(TEST_NAME netsocket-tls-socket-wrapper-unittest)

add_executable(${TEST_NAME})

target_compile_definitions(${TEST_NAME}
    PRIVATE
        MBED_CONF_NSAPI_DNS_ADDRESSES_LIMIT=10
)

target_sources(${TEST_NAME}
    PRIVATE
        ${mbed-os_SOURCE_DIR}/connectivity/netsocket/source/SocketAddress.cpp
        ${mbed-os_SOURCE_DIR}/connectivity/netsocket/source/InternetSocket.cpp
        ${mbed-os_SOURCE_DIR}/connectivity/netsocket/source/TCPSocket.cpp
        ${mbed-os_SOURCE_DIR}/connectivity/netsocket/source/TLSSocketWrapper.cpp
        ${mbed-os_SOURCE_DIR}/connectivity/libraries/nanostack-libservice/source/libip6string/ip6tos.c
        ${mbed-os_SOURCE_DIR}/connectivity/libraries/nanostack-libservice/source/libip6string/stoip6.c
        ${mbed-os_SOURCE_DIR}/connectivity/libraries/nanostack-libservice/source/libBits/common_functions.c
        test_TLSSocketWrapper.cpp
)

target_link_libraries(${TEST_NAME}
    PRIVATE
        mbed-headers-events
        mbed-headers-drivers
        mbed-headers-rtos
        mbed-headers-nanostack-libservice
        mbed-headers-mbedtls
        mbed-headers-netsocket
        mbed-stubs
        mbed-stubs-headers
        mbed-stubs-mbedtls
        mbed-stubs-netsocket
        mbed-stubs-nanostack-libservice
        gmock_main
)

set(MBEDTLS_USER_CONFIG_FILE_PATH "\"${mbed-os_SOURCE_DIR}/connectivity/netsocket/tests/UNITTESTS/netsocket/TLSSocketWrapper/tls_test_config.h\"")
set_source_files_properties(${mbed-os_SOURCE_DIR}/connectivity/netsocket/tests/UNITTESTS/netsocket/TLSSocketWrapper/test_TLSSocketWrapper.cpp PROPERTIES COMPILE_DEFINITIONS MBEDTLS_USER_CONFIG_FILE=${MBEDTLS_USER_CONFIG_FILE_PATH})
set_source_files_properties(${mbed-os_SOURCE_DIR}/connectivity/netsocket/source/TLSSocketWrapper.cpp PROPERTIES COMPILE_DEFINITIONS MBEDTLS_USER_CONFIG_FILE=${MBEDTLS_USER_CONFIG_FILE_PATH})

gtest_discover_tests(${TEST_NAME} PROPERTIES LABELS "netsocket")
