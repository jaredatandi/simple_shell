#!/usr/bin/env bash
set -e

{
	cat <<- 'EOH'
        #This file lists all the individuals that contribute to the repo
	EOH
	echo
	git log --format='%aN <%aE>' | LC_ALL=C.UTF-8 sort -uf
} > AUTHORS
