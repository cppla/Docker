FROM alpine:latest as builder

MAINTAINER cppla https://cpp.la

ADD . .

RUN apk --no-cache add wget gcc musl-dev && gcc real.c -o real

FROM alpine:latest

COPY --from=builder real .

CMD ["./real"]
