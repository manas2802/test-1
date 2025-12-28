import torch

x = torch.randn(1000, 1000)
y = torch.randn(1000, 1000)

z = torch.matmul(x, y)
print("Matrix multiplication done:", z.shape)

