FROM gcc:latest
WORKDIR /app
COPY src/ ./src/
RUN gcc -o age_calculator src/main.c
CMD ["./age_calculator"]