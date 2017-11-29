file(GLOB TEST_SOURCES "test_*.cpp")

foreach(source_file ${TEST_SOURCES})
    get_filename_component(filename ${source_file} NAME)
    string(REPLACE ".cpp" "" bin_name ${filename})
    message(${bin_name})
    add_executable(${bin_name} ${source_file})
endforeach(source_file)