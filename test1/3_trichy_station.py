def shortest_distance(n, distances, s, t):
    total_distance = sum(distances)
    clockwise_distance = sum(distances[s-1:t-1])
    counterclockwise_distance = total_distance - clockwise_distance
    return min(clockwise_distance, counterclockwise_distance)
    
    
n = int(input())
distances = [int(i) for i in input().split()]
l = [int(i) for i in input().split()]
l.sort()
s, t = l

print(shortest_distance(n, distances, s, t))