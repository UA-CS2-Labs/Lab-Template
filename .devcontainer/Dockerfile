# Arch Linux base development package
FROM --platform=linux/amd64 archlinux:base-devel AS amd64

# Update distro and install C++ packages
RUN pacman -Syu  --noconfirm \
    lldb \
    lldb-mi \
    git \
    clang \
    ninja \
    cmake \
    && pacman -Scc --noconfirm

# Copy local directory to docker container
COPY . ./Project

# Set docker container working directory
WORKDIR /Project
