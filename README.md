# BÀI TẬP LỚN HỆ THỐNG QUẢN LÝ VÍ
Hệ thống đăng nhập, đăng ký và quản lý ví điểm thưởng

 # Giới thiệu dự án

Chương trình viết bằng C++, giao diện dòng lệnh cho phép:
- Đăng ký & đăng nhập tài khoản
- Quản lý thông tin người dùng
- Giao dịch ví điểm giữa các người dùng
# Thành viên nhóm
| Họ và tên            | Mã sinh viên  | Nhiệm vụ                               |
|----------------------|---------------|----------------------------------------|
| Đậu Thị Tuyết Anh    | K25DTCN275    | Viết tài liệu, quản lý git  , tạo mới tài khoản           |
| Lưu Thanh Hùng       |               | Quản lý đăng nhập, OTP xác thực        |
| Đặng Đình Thuận      |               | Quản lý hoạt động ví 
| Nguyễn Minh Quân     |               | Phân chia người dùng và chức năng       |
## Phân tích và Đặc tả chức năng
### 1. Người dùng
- Đăng ký tài khoản mới (userID, mật khẩu, thông tin cá nhân)
- Đăng nhập bằng userID + mật khẩu
- Tự đổi mật khẩu
- Cập nhật thông tin (có xác nhận OTP)

### 2. Quản lý thông tin
- Mỗi người dùng có file riêng lưu thông tin
- Mật khẩu được băm trước khi lưu
- Có cơ chế sao lưu & phục hồi dữ liệu dự phòng

### 3. OTP – Mật khẩu dùng một lần
- Dùng trong xác thực cập nhật thông tin và giao dịch
- Tạo ngẫu nhiên, gửi hiển thị CLI và yêu cầu nhập lại

### 4. Quản lý ví điểm
- Mỗi người dùng có 1 ví (walletID duy nhất)
- Giao dịch giữa các ví có kiểm tra số dư, xử lý nguyên tử
- Lưu lịch sử giao dịch vào file log

### 5. Phân quyền người dùng
- Người dùng thường: chỉ quản lý thông tin cá nhân
- Người quản lý: tạo tài khoản mới, hỗ trợ cập nhật thông tin (có OTP xác nhận từ người dùng)
