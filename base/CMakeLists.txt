project(SoftArch)

set(CMAKE_CXX_STANDARD 20)

add_executable(sampleApp main.cpp)

target_link_libraries(sampleApp kernel32.lib)