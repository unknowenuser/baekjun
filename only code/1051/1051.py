def get_data(row,col):
    result = []
    for i in range(col):
        data = int(input())
        row_data = []
        for j in range(row):
            row_data.append(data%10)
            data = data // 10
        result.append(row_data)
    return result
def get_biggest_rect(row,col,data):
    biggest_rect = 1
    for i in range(col-1):
        for j in range(row-1):
            if row - j <= col - i:
                max_distance = row - j
                smaller = "row"
            else :
                max_distance = col - i
                smaller = "col"
            for k in range(1,max_distance):
                value1 = data[i][j]
                value2 = data[i][j + k]
                value3 = data[i+k][j]
                value4 = data[i+k][j+k]
                if value1 == value2 and value1 == value3 and value1 == value4:
                    size = (k + 1) * (k + 1)
                    if size > biggest_rect:
                        biggest_rect = size
    return biggest_rect

grid_col,grid_row = input().split()
grid_row = int(grid_row)
grid_col = int(grid_col)
data = get_data(grid_row,grid_col)
print(get_biggest_rect(grid_row,grid_col,data))