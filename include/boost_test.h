#pragma once

#ifdef _WIN32
  #define boost_test_EXPORT __declspec(dllexport)
#else
  #define boost_test_EXPORT
#endif

boost_test_EXPORT void boost_test();
