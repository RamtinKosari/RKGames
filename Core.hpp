# ifndef __RKGAMES_CORE
    /**
     * @attention Core.hpp Header File is Needed for Compiling in Multi Platforms
     * @brief 'Ramtin Kosari Games' is Collection of Open Source Games
     * @file Core.hpp
     * @author Ramtin Kosari
     * @date 2023-03-22
     */
    # define __RKGAMES_CORE
    //-- Check C++17
    # if __cplusplus < 201402L
        # error RKGames Needs to be Compiled with C++14 (201402)
    # else
        //-- Check Operating System
        # if defined(unix) || defined(__unix) || defined(__unix__)
            /**
             * @brief Linux Detected
             */
            # define DEFAULT_OS 0
        # elif defined(__APPLE__) || defined(__MACH__) || defined(macintosh) || defined(Macintosh)
            /**
             * @brief MacOS Detected
             */
            # define DEFAULT_OS 1
        # elif defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || defined(__CYGWIN__) || defined(__WIN32__) || defined(__WINDOWS__)
            /**
             * @brief Windows Detected
             */
            # define DEFAULT_OS 2
        # elif defined(__ANDROID__)
            /**
             * @brief Android Detected
             */
            # define DEFAULT_OS 3
        # else
            /**
             * @brief None-Support Operating System Detected
             */
            # define DEFAULT_OS -1
        # endif // Check Operating System
        //-- Check Architecture
        # if defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64)
            /**
             * @brief AMD64 Architecture Detected
             */
            # define ARCHITECTURE 0
        # elif defined(__arm__)
            /**
             * @brief ARM Architecture Detected
             */
            # define ARCHITECTURE 1
        # elif defined(__i386) || defined(__i386__) || defined(__i486__) || defined(__i586__) || defined(__i686__)
            /**
             * @brief Intel x86 Architecture Detected
             */
            # define ARCHITECTURE 2
        # else
            /**
             * @brief None-Support Architecture Detected
             */
            # define ARCHITECTURE -1
        # endif // Check Architecture
        //-- Check Compiler
        # if defined(__GNUC__) || defined(__clang__)
            /**
             * @brief GCC and Clang Compilers have Same Settings
             */
            # define DEFAULT_COMPILER 0
        # elif defined(__MINGW32__) || defined(__MINGW64__)
            /**
             * @brief Windows has Its Own Settings
             */
            # define DEFAULT_COMPILER 1
        # endif // Check Compiler
        /**
         * @brief Operating System
         * @param LINUX Linux Operating System
         * @param MACOS MacOS Operating System
         * @param WINDOWS Windows Operating System
         * @param ANDROID Android Operating System
         */
        namespace os {
            enum OS {
                LINUX,
                MACOS,
                WINDOWS,
                ANDROID
            };
        }
        /**
         * @brief Processor Architecture
         * @param AMD64 AMD64 Architecture
         * @param ARM ARM Architecture
         * @param INTEL_X86 Intel x86 Architecture
         */
        namespace architecture {
            enum Architecture {
                AMD64,
                ARM,
                INTEL_X86,
            };
        }
        /**
         * @brief C++ Compilers
         * @param GCC GCC Compiler
         * @param CLANG Clang Compiler
         */
        namespace compilers {
            enum Compilers {
                GCC_CLANG,
                MINGW
            };
        }
    # endif // __cplusplus
# endif // __RKGAMES_CORE