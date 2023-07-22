Build and cache updated image with:
`docker build -t gramine-loki:latest .`

Run the locally built gramine image with:

`docker run --rm --network host -v $(pwd):/work:Z -w /work --device /dev/sgx_enclave --device /dev/sgx_provision --device /dev/sgx_vepc -it gramine-loki:latest`
