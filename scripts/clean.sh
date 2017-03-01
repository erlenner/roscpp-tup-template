#!/bin/sh
ROOT_DIR="$(realpath $(dirname $0))/.."
rm -rf $ROOT_DIR/.tup
rm -rf $ROOT_DIR/build-native/*
touch $ROOT_DIR/build-native/tup.config
