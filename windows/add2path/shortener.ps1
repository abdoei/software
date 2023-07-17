$pathEnv = [System.Environment]::GetEnvironmentVariable('Path')

$splitPaths = $pathEnv.Split(";") 
$shortPaths = @()
ForEach ($path in $splitPaths) {
    $a = New-Object -ComObject Scripting.FileSystemObject    
    $shortPaths += $a.GetFolder("$path").ShortPath
}

$newPath = $shortPaths -join ";"
# get current path
$curr_path = $args[0]
$newPath = $newPath + ";" + $curr_path
# write-host the newPath variable
write-host $newPath

[System.Environment]::SetEnvironmentVariable('Path',$newPath) 
Write-Host "Congratulations! Your script executed successfully"