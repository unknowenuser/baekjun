def get_data(row,col):
    result = []
    for i in range(col):
        data = int(input())
        divder = 10
        row_data = []
        for j in range(row):
            row_data.append(data%10)
            data = data // divder
        result.append(row_data)
    return result
def get_biggest_rect(row,col,data):
    biggest_rect = 0
    for i in range(col):
        for j in range(row):
            for k in range(i,col):
                for l in range(j,row):
                    value1 = data[i][j]
                    value2 = data[k][l]
                    value3 = data[i][l]
                    value4 = data[k][j]
                    if value1 == value2 and value1 == value3 and value1 == value4:
                        size = (k-i + 1)*(l-j + 1)
                        if size > biggest_rect:
                            biggest_rect = size
    return biggest_rect

grid_col,grid_row = input().split()
grid_row = int(grid_row)
grid_col = int(grid_col)
data = get_data(grid_row,grid_col)
print(get_biggest_rect(grid_row,grid_col,data))