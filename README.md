# Lab-Template

Template repository for CS Department. Used to quickly create new assignments with custom CI/CD implementations.

# Developing an assignment:

## Create an assignment repository using this template:

- Click "Use this template"
- Click "Create a new repository"
- Toggle "Include all branches" *ON*

## Add content:

- Add any header files to the `include` directory and add their path(s) to `include/CMakeLists.txt`
  - Remove `header.hpp` if unused
- Add any implementation files to the `src` directory and add their path(s) to `src/CMakeLists.txt`

## Add test cases:

- Add any test cases to the `tests` directory and add their path(s) to `tests/CMakeLists.txt`
- Add a test executable for each test case in `CMakeLists.txt`

## Add autograding:

- Add a step to `.github/workflows/classroom.yml` for each test case
- Add an env variable and a runner for each test case within the `Autograding Reporter` step

# GitHub Codespaces

This repository contains a full C++ development environment via `.devcontainer/Dockerfile`. It uses archlinux:base-devel for a minimal image. This repository also contains a devcontainer configuration file: `.devcontainer/devcontainer.json`. This file configures the generated Docker image to support debugging via the LLDB debugger. It also disables the VSCode C++ extension's intellisense feauture in favor of the `clangd` linter.
