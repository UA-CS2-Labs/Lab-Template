# Arch Linux base development package
FROM --platform=linux/amd64 archlinux:base-devel AS amd64

# Update distro and install C++ packages
RUN pacman -Syu  --noconfirm \
    lldb \
    git \
    clang \
    ninja \
    cmake \
    && pacman -Scc --noconfirm

COPY . ./DDD

WORKDIR /DDD
