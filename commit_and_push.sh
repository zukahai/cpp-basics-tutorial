# Đổi thư mục làm việc tới thư mục chứa repo Git của bạn
Set-Location -Path "G:\git\cpp-basics-tutorial"

# Lấy danh sách tất cả các tệp tin chưa được theo dõi từ git status
$untracked_files = git ls-files --others --exclude-standard

foreach ($file in $untracked_files) {
    if ($file -ne "") {
        try {
            # Chuyển đổi dấu gạch chéo thành gạch chéo ngược
            $valid_file = $file -replace '^.*09_functional', '09_functional'
            $valid_file = $valid_file -replace '/', '\'

            Write-Output "Processing file: $valid_file"

            # Thêm từng tệp vào staging area
            git add "$valid_file"
            
            # Commit từng tệp với thông điệp commit cụ thể
            git commit -m "Add file $valid_file"
            
            # Đẩy commit lên remote repository
            git push
        } catch {
            Write-Output "Error processing file: $file"
        }
    }
}
