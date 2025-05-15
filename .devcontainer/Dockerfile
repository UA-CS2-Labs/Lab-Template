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

# Force LLDB to not disable ASLR, which is needed in the Docker container context
RUN echo "settings set target.disable-aslr false" >> ~/.lldbinit

# Copy local directory to docker container
COPY .. ./Project

# Set docker container working directory
WORKDIR /Project
