# Lấy danh sách các tệp tin chưa được theo dõi từ git status
$untracked_files = git status --porcelain | Select-String '^\?\? ' | ForEach-Object { $_.Line -replace '^\?\? ', '' }

foreach ($file in $untracked_files) {
    if ($file -ne "") {
        try {
            # Thay thế phần đầu của đường dẫn và chuyển đổi dấu gạch chéo thành gạch chéo ngược
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
