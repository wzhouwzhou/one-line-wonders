#!/bin/bash
docker rmi $(docker images -q --filter dangling=true)
