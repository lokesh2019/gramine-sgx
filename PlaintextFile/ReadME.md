<h1> Useful commands</h1>

<h2> About </h2>

First differentiator between an untrusted process vs trusted process.

A simple program to read a plaintext file. When the program is run on the untrusted side, the process dump shows the file content in plaintext.
But when it is run on SGX, the file content isn't visible in the process dump. (Obviously!)

<h2>Build and run </h2>

<li>Compile the C program with standard gcc command line. I have added .bin extension to the binaries to help .gitignore


<li>Compile the manitest file:

`gramine-manifest -Dlog_level=error readfile.manifest.template readfile.manifest`

<li>Create signed SGX enclave:

`gramine-sgx-sign --manifest readfile.manifest --output readfile.manifest.sgx`

<li> Dump process memory

Install gdb for this one. Not needed for all the examples so I haven't included in the docker image

`apt -y install gdb`

Find the PID of the running binary. It waits for a char indefinitely for this purpose. And dump memory
`gcore -o readfile PID`

Look for the plaintext string from the file - it should appear only when not running in SGX

`strings readfile.PID | grep 'wizard'`


<li>Run on SGX with:

`gramine-sgx readfile`
