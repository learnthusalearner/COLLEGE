import React, { ReactNode } from 'react'

interface DashboardLayoutProps {
    children: ReactNode;
  }

function DashboardLayout({children}:DashboardLayoutProps) {
  return (
    <div>
        {children}
    </div>
  )
}

export default DashboardLayout