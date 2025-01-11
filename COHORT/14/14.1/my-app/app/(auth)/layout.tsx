
export default function RootLayout({children}:{
    children: React.ReactNode;
  }) {
    return <div className="border-b text-center">
        20% off for next 3 days
        {children}
    </div>
}