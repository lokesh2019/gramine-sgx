<h1> Useful commands</h1>

<h2> About </h2>

A simple program to read an encrypted file. The file encryption key comes from a local attestation server.
It is based on the pytorch example: https://gramine.readthedocs.io/en/stable/tutorials/pytorch/index.html

<h2>Build and run </h2>

<li>Compile the C program with standard gcc command line


<li>Compile the manitest file:

`gramine-manifest -Dlog_level=error readfile.manifest.template readfile.manifest`


<li>Create signed SGX enclave:


`gramine-sgx-sign --manifest readfile.manifest --output readfile.manifest.sgx`


<li>See pytorch tutorial for instructions on how to set up a DCAP server locally.

`cd gramine/CI-Examples/ra-tls-secret-prov`
`export RA_TLS_ALLOW_DEBUG_ENCLAVE_INSECURE=1`
`export RA_TLS_ALLOW_OUTDATED_TCB_INSECURE=1`
`export RA_TLS_ALLOW_HW_CONFIG_NEEDED=1`
`export RA_TLS_ALLOW_SW_HARDENING_NEEDED=1`
`CFLAGS="-I../../tools/sgx/ra-tls" make app dcap RA_TYPE=dcap`

<li>Run with:

`gramine-sgx readfile`