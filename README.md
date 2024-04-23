# Multiplication Table in C++

This repository contains a function that generates and prints the multiplication table up to n x n.

## Example
Here's an example of how the `printMultiplicationTable` function can be used:
```cpp
int n = 5;
printMultiplicationTable(n);
```

Expected Output:

```cpp
1  2  3  4  5
2  4  6  8 10
3  6  9 12 15
4  8 12 16 20
5 10 15 20 25
```

## Prerequisites

Before you begin, ensure you have the following installed on your local machine:

- A modern C++ compiler
- Git
- Docker

## Getting Started

Follow these steps to get a copy of the project up and running on your local machine for development and testing purposes.

### Clone the Repository

First, clone the repository using the following commands:

```bash
git clone https://github.com/e2e2a/table-cpp.git
cd table-cpp
```

## Build and Run the Application

To build the application, use the following command:

```bash
g++ -o table table.cpp
```

To run the application, use the following command:

```bash
./table
```

## Docker

This repository also includes a Dockerfile for building a Docker image of the application. To build the Docker image, use the following command:

```bash
docker build -t table .
```

To run the Docker image, use the following command:

```bash
docker run -v ${PWD}:/app table
```

To run the table.exe:

```bash
docker run -it table
```
## Continuous Integration with GitHub Actions

This repository uses GitHub Actions for continuous integration. Upon every push to the repository, the GitHub Actions workflow will automatically build the project and create a release with the built executable.

### Setting up GitHub Actions

Before you can use GitHub Actions, you need to update the workflow permissions. Navigate to your project’s `Settings` -> `Actions` -> `General` -> `Workflow permissions` and set it to `Read and write permissions`. This allows GitHub Actions to access workflow environment variables like `$GITHUB_TOKEN`.
