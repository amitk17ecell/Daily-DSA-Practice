from collections import deque

# BFS function
def bfs(graph, start):
    visited = set()
    queue = deque()

    # Start node
    visited.add(start)
    queue.append(start)

    print("BFS Traversal:", end=" ")

    while queue:
        node = queue.popleft()
        print(node, end=" ")

        # Visit all adjacent nodes
        for neighbour in graph[node]:
            if neighbour not in visited:
                visited.add(neighbour)
                queue.append(neighbour)


# Graph using adjacency list
graph = {
    0: [1, 2],
    1: [0, 3, 4],
    2: [0, 5],
    3: [1],
    4: [1],
    5: [2]
}

# Starting node
bfs(graph, 0)