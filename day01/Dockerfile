FROM frolvlad/alpine-gxx as BASE
COPY solution.cpp .
RUN g++ -static solution.cpp -o /bin/aoc

FROM scratch
COPY --from=BASE /bin/aoc /bin/aoc
COPY input.txt .
ENTRYPOINT ["/bin/aoc"]