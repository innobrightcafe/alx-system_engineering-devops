#!/usr/bin/env bash
# Set variables for the client, server, and file
client="inosoft@197.210.85.39"
server="ubuntu@100.25.17.237"
file="/path/to/file"
# Disable strict host key checking for this session only
ssh_options="-o StrictHostKeyChecking=no"
# Transfer the file from the client to the server using scp
scp "$file" "$server:~/"
