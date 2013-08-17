#!/bin/bash

gen_symlinks() {
	local DESTDIR=${1}
	local LINKS="xcrun xcodebuild"

	cd ${DESTDIR}/bin
	for stub in ${LINKS}; do
		echo "Generating stub $stub..."
		ln -s /bin/true $stub
	done

	exit 0
}

gen_symlinks ${1}
