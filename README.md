# CPSC-Template
Template repository for CS Department

## Usage
- Create an Assignment repository using this template
- Add any header files to the `include` directory and adjust `include/CMakeLists.txt`
- Add any implementation files to the `src` directory and adjust `src/CMakeLists.txt`
- Add any test cases to the `tests` directory and adjust `tests/CMakeLists.txt`
  - For every new test:
    - Add a test executable to `CMakeLists.txt`
    - Add a test run command to `CMakeLists.txt`
    - Add a step to `.github/workflows/classroom.yml`
      - Add an env and a runner within the `Autograding Reporter` step
