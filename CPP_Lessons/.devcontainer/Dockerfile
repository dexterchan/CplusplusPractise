# Use the latest version of Alpine Linux as the base image
FROM alpine:latest as build

# Metadata
LABEL description="Build container"

# Update the package repository and install build tools
RUN apk update && apk add --no-cache \ 
    autoconf build-base binutils cmake curl file gcc g++ git libgcc libtool linux-headers make musl-dev ninja tar unzip wget bash gdb


# Set the working directory in the container
WORKDIR /app

